/*******************************************************************************
*  (c) 2021 Zondax GmbH
*
*  Licensed under the Apache License, Version 2.0 (the "License");
*  you may not use this file except in compliance with the License.
*  You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
*  Unless required by applicable law or agreed to in writing, software
*  distributed under the License is distributed on an "AS IS" BASIS,
*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*  See the License for the specific language governing permissions and
*  limitations under the License.
********************************************************************************/
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

// Modules names
static const char* STR_MO_SYSTEM = "System";
static const char* STR_MO_SCHEDULER = "Scheduler";
static const char* STR_MO_BABE = "Babe";
static const char* STR_MO_TIMESTAMP = "Timestamp";
static const char* STR_MO_INDICES = "Indices";
static const char* STR_MO_BALANCES = "Balances";
static const char* STR_MO_AUTHORSHIP = "Authorship";
static const char* STR_MO_STAKING = "Staking";
static const char* STR_MO_OFFENCES = "Offences";
static const char* STR_MO_SESSION = "Session";
static const char* STR_MO_GRANDPA = "Grandpa";
static const char* STR_MO_IMONLINE = "Imonline";
static const char* STR_MO_AUTHORITYDISCOVERY = "Authoritydiscovery";
static const char* STR_MO_DEMOCRACY = "Democracy";
static const char* STR_MO_COUNCIL = "Council";
static const char* STR_MO_TECHNICALCOMMITTEE = "Technicalcommittee";
static const char* STR_MO_ELECTIONSPHRAGMEN = "Electionsphragmen";
static const char* STR_MO_TECHNICALMEMBERSHIP = "Technicalmembership";
static const char* STR_MO_TREASURY = "Treasury";
static const char* STR_MO_CLAIMS = "Claims";
static const char* STR_MO_VESTING = "Vesting";
static const char* STR_MO_UTILITY = "Utility";
static const char* STR_MO_IDENTITY = "Identity";
static const char* STR_MO_PROXY = "Proxy";
static const char* STR_MO_MULTISIG = "Multisig";
static const char* STR_MO_BOUNTIES = "Bounties";
static const char* STR_MO_TIPS = "Tips";
static const char* STR_MO_ELECTIONPROVIDERMULTIPHASE = "Electionprovidermultiphase";
static const char* STR_MO_RANDOMNESSCOLLECTIVEFLIP = "Randomnesscollectiveflip";
static const char* STR_MO_PARACHAINSYSTEM = "Parachainsystem";
static const char* STR_MO_SUDO = "Sudo";
static const char* STR_MO_ASSETS = "Assets";
static const char* STR_MO_XCMPQUEUE = "Xcmpqueue";
static const char* STR_MO_POLKADOTXCM = "Polkadotxcm";

// Methods names
static const char* STR_ME_FILL_BLOCK = "Fill block";
static const char* STR_ME_REMARK = "Remark";
static const char* STR_ME_SET_HEAP_PAGES = "Set heap pages";
static const char* STR_ME_SET_CODE = "Set code";
static const char* STR_ME_SET_CODE_WITHOUT_CHECKS = "Set code without checks";
static const char* STR_ME_SET_CHANGES_TRIE_CONFIG = "Set changes trie config";
static const char* STR_ME_SET_STORAGE = "Set storage";
static const char* STR_ME_KILL_STORAGE = "Kill storage";
static const char* STR_ME_KILL_PREFIX = "Kill prefix";
static const char* STR_ME_SUICIDE = "Suicide";
static const char* STR_ME_SCHEDULE = "Schedule";
static const char* STR_ME_CANCEL = "Cancel";
static const char* STR_ME_SCHEDULE_NAMED = "Schedule named";
static const char* STR_ME_CANCEL_NAMED = "Cancel named";
static const char* STR_ME_SCHEDULE_AFTER = "Schedule after";
static const char* STR_ME_SCHEDULE_NAMED_AFTER = "Schedule named after";
static const char* STR_ME_REPORT_EQUIVOCATION = "Report equivocation";
static const char* STR_ME_REPORT_EQUIVOCATION_UNSIGNED = "Report equivocation unsigned";
static const char* STR_ME_SET = "Set";
static const char* STR_ME_CLAIM = "Claim";
static const char* STR_ME_TRANSFER = "Transfer";
static const char* STR_ME_FREE = "Free";
static const char* STR_ME_FORCE_TRANSFER = "Force transfer";
static const char* STR_ME_FREEZE = "Freeze";
static const char* STR_ME_SET_BALANCE = "Set balance";
static const char* STR_ME_TRANSFER_KEEP_ALIVE = "Transfer keep alive";
static const char* STR_ME_SET_UNCLES = "Set uncles";
static const char* STR_ME_BOND = "Bond";
static const char* STR_ME_BOND_EXTRA = "Bond extra";
static const char* STR_ME_UNBOND = "Unbond";
static const char* STR_ME_WITHDRAW_UNBONDED = "Withdraw Unbonded";
static const char* STR_ME_VALIDATE = "Validate";
static const char* STR_ME_NOMINATE = "Nominate";
static const char* STR_ME_CHILL = "Chill";
static const char* STR_ME_SET_PAYEE = "Set payee";
static const char* STR_ME_SET_CONTROLLER = "Set controller";
static const char* STR_ME_SET_VALIDATOR_COUNT = "Set validator count";
static const char* STR_ME_INCREASE_VALIDATOR_COUNT = "Increase validator count";
static const char* STR_ME_SCALE_VALIDATOR_COUNT = "Scale validator count";
static const char* STR_ME_FORCE_NO_ERAS = "Force no eras";
static const char* STR_ME_FORCE_NEW_ERA = "Force new era";
static const char* STR_ME_SET_INVULNERABLES = "Set invulnerables";
static const char* STR_ME_FORCE_UNSTAKE = "Force unstake";
static const char* STR_ME_FORCE_NEW_ERA_ALWAYS = "Force new era always";
static const char* STR_ME_CANCEL_DEFERRED_SLASH = "Cancel deferred slash";
static const char* STR_ME_PAYOUT_STAKERS = "Payout stakers";
static const char* STR_ME_REBOND = "Rebond";
static const char* STR_ME_SET_HISTORY_DEPTH = "Set history depth";
static const char* STR_ME_REAP_STASH = "Reap stash";
static const char* STR_ME_SUBMIT_ELECTION_SOLUTION = "Submit election solution";
static const char* STR_ME_SUBMIT_ELECTION_SOLUTION_UNSIGNED = "Submit election solution unsigned";
static const char* STR_ME_SET_KEYS = "Set keys";
static const char* STR_ME_PURGE_KEYS = "Purge keys";
static const char* STR_ME_NOTE_STALLED = "Note stalled";
static const char* STR_ME_HEARTBEAT = "Heartbeat";
static const char* STR_ME_PROPOSE = "Propose";
static const char* STR_ME_SECOND = "Second";
static const char* STR_ME_VOTE = "Vote";
static const char* STR_ME_EMERGENCY_CANCEL = "Emergency cancel";
static const char* STR_ME_EXTERNAL_PROPOSE = "External propose";
static const char* STR_ME_EXTERNAL_PROPOSE_MAJORITY = "External propose majority";
static const char* STR_ME_EXTERNAL_PROPOSE_DEFAULT = "External propose default";
static const char* STR_ME_FAST_TRACK = "Fast track";
static const char* STR_ME_VETO_EXTERNAL = "Veto external";
static const char* STR_ME_CANCEL_REFERENDUM = "Cancel referendum";
static const char* STR_ME_CANCEL_QUEUED = "Cancel queued";
static const char* STR_ME_DELEGATE = "Delegate";
static const char* STR_ME_UNDELEGATE = "Undelegate";
static const char* STR_ME_CLEAR_PUBLIC_PROPOSALS = "Clear public proposals";
static const char* STR_ME_NOTE_PREIMAGE = "Note preimage";
static const char* STR_ME_NOTE_PREIMAGE_OPERATIONAL = "Note preimage operational";
static const char* STR_ME_NOTE_IMMINENT_PREIMAGE = "Note imminent preimage";
static const char* STR_ME_NOTE_IMMINENT_PREIMAGE_OPERATIONAL = "Note imminent preimage operational";
static const char* STR_ME_REAP_PREIMAGE = "Reap preimage";
static const char* STR_ME_UNLOCK = "Unlock";
static const char* STR_ME_REMOVE_VOTE = "Remove vote";
static const char* STR_ME_REMOVE_OTHER_VOTE = "Remove other vote";
static const char* STR_ME_ENACT_PROPOSAL = "Enact proposal";
static const char* STR_ME_BLACKLIST = "Blacklist";
static const char* STR_ME_CANCEL_PROPOSAL = "Cancel proposal";
static const char* STR_ME_SET_MEMBERS = "Set members";
static const char* STR_ME_EXECUTE = "Execute";
static const char* STR_ME_CLOSE = "Close";
static const char* STR_ME_DISAPPROVE_PROPOSAL = "Disapprove proposal";
static const char* STR_ME_REMOVE_VOTER = "Remove voter";
static const char* STR_ME_REPORT_DEFUNCT_VOTER = "Report defunct voter";
static const char* STR_ME_SUBMIT_CANDIDACY = "Submit candidacy";
static const char* STR_ME_RENOUNCE_CANDIDACY = "Renounce candidacy";
static const char* STR_ME_REMOVE_MEMBER = "Remove member";
static const char* STR_ME_ADD_MEMBER = "Add member";
static const char* STR_ME_SWAP_MEMBER = "Swap member";
static const char* STR_ME_RESET_MEMBERS = "Reset members";
static const char* STR_ME_CHANGE_KEY = "Change key";
static const char* STR_ME_SET_PRIME = "Set prime";
static const char* STR_ME_CLEAR_PRIME = "Clear prime";
static const char* STR_ME_PROPOSE_SPEND = "Propose spend";
static const char* STR_ME_REJECT_PROPOSAL = "Reject proposal";
static const char* STR_ME_APPROVE_PROPOSAL = "Approve proposal";
static const char* STR_ME_REPORT_AWESOME = "Report awesome";
static const char* STR_ME_RETRACT_TIP = "Retract tip";
static const char* STR_ME_TIP_NEW = "Tip new";
static const char* STR_ME_TIP = "Tip";
static const char* STR_ME_CLOSE_TIP = "Close tip";
static const char* STR_ME_PROPOSE_BOUNTY = "Propose bounty";
static const char* STR_ME_APPROVE_BOUNTY = "Approve bounty";
static const char* STR_ME_PROPOSE_CURATOR = "Propose curator";
static const char* STR_ME_UNASSIGN_CURATOR = "Unassign curator";
static const char* STR_ME_ACCEPT_CURATOR = "Accept curator";
static const char* STR_ME_AWARD_BOUNTY = "Award bounty";
static const char* STR_ME_CLAIM_BOUNTY = "Claim bounty";
static const char* STR_ME_CLOSE_BOUNTY = "Close bounty";
static const char* STR_ME_EXTEND_BOUNTY_EXPIRY = "Extend bounty expiry";
static const char* STR_ME_MINT_CLAIM = "Mint claim";
static const char* STR_ME_CLAIM_ATTEST = "Claim attest";
static const char* STR_ME_ATTEST = "Attest";
static const char* STR_ME_MOVE_CLAIM = "Move claim";
static const char* STR_ME_VEST = "Vest";
static const char* STR_ME_VEST_OTHER = "Vest other";
static const char* STR_ME_VESTED_TRANSFER = "Vested transfer";
static const char* STR_ME_FORCE_VESTED_TRANSFER = "Force vested transfer";
static const char* STR_ME_BATCH = "Batch";
static const char* STR_ME_AS_DERIVATIVE = "As derivative";
static const char* STR_ME_BATCH_ALL = "Batch all";
static const char* STR_ME_ADD_REGISTRAR = "Add registrar";
static const char* STR_ME_SET_IDENTITY = "Set identity";
static const char* STR_ME_SET_SUBS = "Set subs";
static const char* STR_ME_CLEAR_IDENTITY = "Clear identity";
static const char* STR_ME_REQUEST_JUDGEMENT = "Request judgement";
static const char* STR_ME_CANCEL_REQUEST = "Cancel request";
static const char* STR_ME_SET_FEE = "Set fee";
static const char* STR_ME_SET_ACCOUNT_ID = "Set account id";
static const char* STR_ME_SET_FIELDS = "Set fields";
static const char* STR_ME_PROVIDE_JUDGEMENT = "Provide judgement";
static const char* STR_ME_KILL_IDENTITY = "Kill identity";
static const char* STR_ME_ADD_SUB = "Add sub";
static const char* STR_ME_RENAME_SUB = "Rename sub";
static const char* STR_ME_REMOVE_SUB = "Remove sub";
static const char* STR_ME_QUIT_SUB = "Quit sub";
static const char* STR_ME_PROXY = "Proxy";
static const char* STR_ME_ADD_PROXY = "Add proxy";
static const char* STR_ME_REMOVE_PROXY = "Remove proxy";
static const char* STR_ME_REMOVE_PROXIES = "Remove proxies";
static const char* STR_ME_ANONYMOUS = "Anonymous";
static const char* STR_ME_KILL_ANONYMOUS = "Kill anonymous";
static const char* STR_ME_ANNOUNCE = "Announce";
static const char* STR_ME_REMOVE_ANNOUNCEMENT = "Remove announcement";
static const char* STR_ME_REJECT_ANNOUNCEMENT = "Reject announcement";
static const char* STR_ME_PROXY_ANNOUNCED = "Proxy announced";
static const char* STR_ME_AS_MULTI_THRESHOLD_1 = "As multi threshold 1";
static const char* STR_ME_AS_MULTI = "As multi";
static const char* STR_ME_APPROVE_AS_MULTI = "Approve as multi";
static const char* STR_ME_CANCEL_AS_MULTI = "Cancel as multi";
static const char* STR_ME_KICK = "Kick";
static const char* STR_ME_CLEAN_DEFUNCT_VOTERS = "Clean defunct voters";
static const char* STR_ME_SLASH_TIP = "Slash tip";
static const char* STR_ME_SUBMIT_UNSIGNED = "Submit unsigned";
static const char* STR_ME_REMARK_WITH_EVENT = "Remark with event";
static const char* STR_ME_PLAN_CONFIG_CHANGE = "Plan config change";
static const char* STR_ME_SET_UPGRADE_BLOCK = "Set upgrade block";
static const char* STR_ME_SET_VALIDATION_DATA = "Set validation data";
static const char* STR_ME_SUDO_SEND_UPWARD_MESSAGE = "Sudo send upward message";
static const char* STR_ME_AUTHORIZE_UPGRADE = "Authorize upgrade";
static const char* STR_ME_ENACT_AUTHORIZED_UPGRADE = "Enact authorized upgrade";
static const char* STR_ME_SUDO = "Sudo";
static const char* STR_ME_SUDO_UNCHECKED_WEIGHT = "Sudo unchecked weight";
static const char* STR_ME_SET_KEY = "Set key";
static const char* STR_ME_SUDO_AS = "Sudo as";
static const char* STR_ME_CREATE = "Create";
static const char* STR_ME_FORCE_CREATE = "Force create";
static const char* STR_ME_DESTROY = "Destroy";
static const char* STR_ME_MINT = "Mint";
static const char* STR_ME_BURN = "Burn";
static const char* STR_ME_THAW = "Thaw";
static const char* STR_ME_FREEZE_ASSET = "Freeze asset";
static const char* STR_ME_THAW_ASSET = "Thaw asset";
static const char* STR_ME_TRANSFER_OWNERSHIP = "Transfer ownership";
static const char* STR_ME_SET_TEAM = "Set team";
static const char* STR_ME_SET_METADATA = "Set metadata";
static const char* STR_ME_CLEAR_METADATA = "Clear metadata";
static const char* STR_ME_FORCE_SET_METADATA = "Force set metadata";
static const char* STR_ME_FORCE_CLEAR_METADATA = "Force clear metadata";
static const char* STR_ME_FORCE_ASSET_STATUS = "Force asset status";
static const char* STR_ME_APPROVE_TRANSFER = "Approve transfer";
static const char* STR_ME_CANCEL_APPROVAL = "Cancel approval";
static const char* STR_ME_FORCE_CANCEL_APPROVAL = "Force cancel approval";
static const char* STR_ME_TRANSFER_APPROVED = "Transfer approved";
static const char* STR_ME_SEND = "Send";

// Items names
static const char* STR_IT__ratio = "Ratio";
static const char* STR_IT__remark = "Remark";
static const char* STR_IT_pages = "Pages";
static const char* STR_IT_code = "Code";
static const char* STR_IT_changes_trie_config = "Changes trie config";
static const char* STR_IT_items = "Items";
static const char* STR_IT_keys = "Keys";
static const char* STR_IT_prefix = "Prefix";
static const char* STR_IT__subkeys = "Subkeys";
static const char* STR_IT_when = "When";
static const char* STR_IT_maybe_periodic = "Maybe periodic";
static const char* STR_IT_priority = "Priority";
static const char* STR_IT_call = "Call";
static const char* STR_IT_index = "Index";
static const char* STR_IT_id = "Id";
static const char* STR_IT_after = "After";
static const char* STR_IT_equivocation_proof = "Equivocation proof";
static const char* STR_IT_key_owner_proof = "Key owner proof";
static const char* STR_IT_now = "Now";
static const char* STR_IT_new_ = "New";
static const char* STR_IT_freeze = "Freeze";
static const char* STR_IT_dest = "Dest";
static const char* STR_IT_value = "Amount";
static const char* STR_IT_who = "Who";
static const char* STR_IT_new_free = "New free";
static const char* STR_IT_new_reserved = "New reserved";
static const char* STR_IT_source = "Source";
static const char* STR_IT_new_uncles = "New uncles";
static const char* STR_IT_controller = "Controller";
static const char* STR_IT_payee = "Payee";
static const char* STR_IT_max_additional = "Amount";
static const char* STR_IT_num_slashing_spans = "Num slashing spans";
static const char* STR_IT_prefs = "Prefs";
static const char* STR_IT_targets = "Targets";
static const char* STR_IT_additional = "Additional";
static const char* STR_IT_factor = "Factor";
static const char* STR_IT_invulnerables = "Invulnerables";
static const char* STR_IT_stash = "Stash";
static const char* STR_IT_era = "Era";
static const char* STR_IT_slash_indices = "Slash indices";
static const char* STR_IT_validator_stash = "Validator stash";
static const char* STR_IT_new_history_depth = "New history depth";
static const char* STR_IT__era_items_deleted = "Era items deleted";
static const char* STR_IT_winners = "Winners";
static const char* STR_IT_compact = "Compact";
static const char* STR_IT_score = "Score";
static const char* STR_IT_size = "Size";
static const char* STR_IT_proof = "Proof";
static const char* STR_IT_delay = "Delay";
static const char* STR_IT_best_finalized_block_number = "Best finalized block number";
static const char* STR_IT_heartbeat = "Heartbeat";
static const char* STR_IT__signature = "Signature";
static const char* STR_IT_proposal_hash = "Proposal hash";
static const char* STR_IT_proposal = "Proposal";
static const char* STR_IT_seconds_upper_bound = "Seconds upper bound";
static const char* STR_IT_ref_index = "Ref index";
static const char* STR_IT_vote = "Vote";
static const char* STR_IT_voting_period = "Voting period";
static const char* STR_IT_which = "Which";
static const char* STR_IT_to = "To";
static const char* STR_IT_conviction = "Conviction";
static const char* STR_IT_balance = "Balance";
static const char* STR_IT_encoded_proposal = "Encoded proposal";
static const char* STR_IT_proposal_len_upper_bound = "Proposal len upper bound";
static const char* STR_IT_target = "Target";
static const char* STR_IT_maybe_ref_index = "Maybe ref index";
static const char* STR_IT_prop_index = "Prop index";
static const char* STR_IT_new_members = "New members";
static const char* STR_IT_prime = "Prime";
static const char* STR_IT_old_count = "Old count";
static const char* STR_IT_length_bound = "Length bound";
static const char* STR_IT_threshold = "Threshold";
static const char* STR_IT_approve = "Approve";
static const char* STR_IT_proposal_weight_bound = "Proposal weight bound";
static const char* STR_IT_votes = "Votes";
static const char* STR_IT_defunct = "Defunct";
static const char* STR_IT_candidate_count = "Candidate count";
static const char* STR_IT_renouncing = "Renouncing";
static const char* STR_IT_has_replacement = "Has replacement";
static const char* STR_IT_remove = "Remove";
static const char* STR_IT_add = "Add";
static const char* STR_IT_members = "Members";
static const char* STR_IT_beneficiary = "Beneficiary";
static const char* STR_IT_proposal_id = "Proposal id";
static const char* STR_IT_reason = "Reason";
static const char* STR_IT_hash = "Hash";
static const char* STR_IT_tip_value = "Tip value";
static const char* STR_IT_description = "Description";
static const char* STR_IT_bounty_id = "Bounty id";
static const char* STR_IT_curator = "Curator";
static const char* STR_IT_fee = "Fee";
static const char* STR_IT_ethereum_signature = "Ethereum signature";
static const char* STR_IT_vesting_schedule = "Vesting schedule";
static const char* STR_IT_statement = "Statement";
static const char* STR_IT_old = "Old";
static const char* STR_IT_maybe_preclaim = "Maybe preclaim";
static const char* STR_IT_schedule = "Schedule";
static const char* STR_IT_calls = "Calls";
static const char* STR_IT_account = "Account";
static const char* STR_IT_info = "Info";
static const char* STR_IT_subs = "Subs";
static const char* STR_IT_reg_index = "Reg index";
static const char* STR_IT_max_fee = "Max fee";
static const char* STR_IT_fields = "Fields";
static const char* STR_IT_judgement = "Judgement";
static const char* STR_IT_sub = "Sub";
static const char* STR_IT_data = "Data";
static const char* STR_IT_real = "Real";
static const char* STR_IT_force_proxy_type = "Force proxy type";
static const char* STR_IT_delegate = "Delegate";
static const char* STR_IT_proxy_type = "Proxy type";
static const char* STR_IT_spawner = "Spawner";
static const char* STR_IT_height = "Height";
static const char* STR_IT_ext_index = "Ext index";
static const char* STR_IT_call_hash = "Call hash";
static const char* STR_IT_other_signatories = "Other signatories";
static const char* STR_IT_maybe_timepoint = "Maybe timepoint";
static const char* STR_IT_store_call = "Store call";
static const char* STR_IT_max_weight = "Max weight";
static const char* STR_IT_timepoint = "Timepoint";
static const char* STR_IT__num_voters = "Num voters";
static const char* STR_IT__num_defunct = "Num defunct";
static const char* STR_IT_solution = "Solution";
static const char* STR_IT_witness = "Witness";
static const char* STR_IT_remark = "Remark";
static const char* STR_IT_config = "Config";
static const char* STR_IT_relay_chain_block = "Relay chain block";
static const char* STR_IT_message = "Message";
static const char* STR_IT_code_hash = "Code hash";
static const char* STR_IT__weight = "Weight";
static const char* STR_IT_admin = "Admin";
static const char* STR_IT_min_balance = "Min balance";
static const char* STR_IT_owner = "Owner";
static const char* STR_IT_is_sufficient = "Is sufficient";
static const char* STR_IT_amount = "Amount";
static const char* STR_IT_issuer = "Issuer";
static const char* STR_IT_freezer = "Freezer";
static const char* STR_IT_name = "Name";
static const char* STR_IT_symbol = "Symbol";
static const char* STR_IT_decimals = "Decimals";
static const char* STR_IT_is_frozen = "Is frozen";
static const char* STR_IT_destination = "Destination";

#ifdef __cplusplus
}
#endif
