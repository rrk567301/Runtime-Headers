@class NSURL, NSDictionary, NSObject;
@protocol OS_os_activity;

@interface WBSSiteMetadataRequest : NSObject <NSCopying>

@property (readonly, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSDictionary *extraInfo;
@property (readonly, nonatomic) NSObject<OS_os_activity> *activity;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithURL:(id)a0 extraInfo:(id)a1;

@end
