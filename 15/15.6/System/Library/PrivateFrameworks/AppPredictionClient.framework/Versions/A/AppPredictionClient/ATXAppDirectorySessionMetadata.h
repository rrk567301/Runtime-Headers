@class NSString, NSNumber;

@interface ATXAppDirectorySessionMetadata : NSObject <ATXProactiveSuggestionUIFeedbackSessionMetadataProtocol>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *engagedBundleId;
@property (retain, nonatomic) NSNumber *engagedBundleIdInTopAppsVisible;
@property (nonatomic) char didSearchDuringSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEngagedBundleId:(id)a0 engagedBundleIdInTopAppsVisible:(id)a1 didSearchDuringSession:(char)a2;
- (char)isEqualToATXAppDirectorySessionMetadata:(id)a0;

@end
