@class NSString, NSISO8601DateFormatter;

@interface SVXRadarDraftFactory : NSObject {
    NSString *_timeZone;
    NSISO8601DateFormatter *_ttrTimeFormatter;
}

- (void).cxx_destruct;
- (id)init;
- (id)createWithRequiredContent:(id)a0 extraContent:(id)a1;

@end
