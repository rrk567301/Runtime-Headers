@class NSString, NSDictionary;

@interface iCloudRegionInfo : NSObject <NSCopying> {
    NSDictionary *_regionInfoDictionary;
}

@property (readonly, nonatomic) NSString *displayedHostname;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
