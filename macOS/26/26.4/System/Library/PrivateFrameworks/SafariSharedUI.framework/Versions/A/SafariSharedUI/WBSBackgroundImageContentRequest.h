@class NSString;

@interface WBSBackgroundImageContentRequest : WBSSiteMetadataRequest

@property (readonly, copy, nonatomic) NSString *uuidString;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithUUIDString:(id)a0;

@end
