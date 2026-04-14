@class NSString, NSData;

@interface PKProvisioningAnalyticsSessionSubjectHandle : NSObject {
    BOOL _didBeginSubject;
    NSData *_archivedParent;
}

@property (readonly, nonatomic) NSString *subject;

- (void)stop;
- (id)init;
- (void).cxx_destruct;
- (id)_initWithSubject:(id)a0;
- (id)_initWithSubject:(id)a0 archivedParent:(id)a1;
- (void)_startReportingIfNecessary;
- (id)archivedParentToken;

@end
