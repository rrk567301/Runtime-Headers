@class NSNumber, NSString, NSUserDefaults;

@interface ABCPreferences : NSObject

@property (nonatomic) char disable_internal_build;
@property (retain, nonatomic) NSNumber *carrier_seed_flag;
@property (retain, nonatomic) NSNumber *seed_flag;
@property (retain, nonatomic) NSNumber *vendor_flag;
@property (retain, nonatomic) NSString *database_container_path;
@property (nonatomic) char optin_autobugcapture;
@property (nonatomic) char disable_autobugcapture;
@property (nonatomic) char dut_flag;
@property (retain, nonatomic) NSNumber *npi_flag;
@property (nonatomic) char ignore_automated_device_group;
@property (nonatomic) char abcUIUserConsent;
@property (nonatomic) char ABCUserConsent;
@property (nonatomic) char diagnosticsAndUsageEnabled;
@property (nonatomic) char autoFeedbackAssistantEnable;
@property (nonatomic) char arbitrator_disable_dampening;
@property (nonatomic) char apns_enable;
@property (nonatomic) char apns_dev_environment;
@property (nonatomic) long long arbitrator_daily_count_limit;
@property (nonatomic) unsigned long long max_upload_retries;
@property (nonatomic) unsigned long long arbitrator_dampened_ips_limit;
@property (nonatomic) unsigned long long dampening_restriction_factor;
@property (nonatomic) char disable_api_rate_limit;
@property (nonatomic) double api_rate_limit;
@property (nonatomic) char *enable_cloudkit;
@property (nonatomic) double api_limit_window;
@property (retain, nonatomic) NSUserDefaults *automatedDeviceGroupDefaults;
@property (nonatomic) char cloudkit_enable;
@property (nonatomic) char cloudkit_sandbox_environment;
@property (nonatomic) unsigned long long cloudkit_upload_expiration_timeout;
@property (nonatomic) unsigned long long cloudkit_upload_connection_timeout;
@property (nonatomic) unsigned long long cloudkit_upload_max_fallback_log_count;
@property (retain, nonatomic) NSString *cloudkit_container_identifier;
@property (retain, nonatomic) NSString *cloudkit_inverness_service;
@property (nonatomic) char cloudkit_prefers_anonymous;
@property (nonatomic) unsigned long long case_summary_maximum_per_submission;
@property (nonatomic) unsigned long long case_summary_submitted_retention_days;
@property (nonatomic) unsigned long long case_summary_unsubmitted_retention_days;
@property (nonatomic) char case_summary_enable;
@property (nonatomic) char diagnostic_pipeline_submission;
@property (nonatomic) double diagnostic_pipeline_submission_rate;
@property (readonly, nonatomic) char is_automated_device_group;
@property (readonly, nonatomic) char has_apple_email;
@property (readonly, nonatomic) char is_carry_device;

+ (id)initialValuesDictionary;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setABCUIUserConsent:(char)a0;

@end
