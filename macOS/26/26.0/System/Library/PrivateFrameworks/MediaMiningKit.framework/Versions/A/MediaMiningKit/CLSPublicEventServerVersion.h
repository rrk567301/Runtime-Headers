@class NSString, NSDate;

@interface CLSPublicEventServerVersion : NSObject

@property (readonly, nonatomic) NSString *versionString;
@property (readonly, nonatomic) NSDate *dateOfServerUpdate;

- (void).cxx_destruct;
- (id)initWithVersionString:(id)a0 dateOfServerUpdate:(id)a1;

@end
