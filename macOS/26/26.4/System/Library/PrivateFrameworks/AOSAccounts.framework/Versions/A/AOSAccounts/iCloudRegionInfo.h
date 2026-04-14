@class NSString, NSDictionary;

@interface iCloudRegionInfo : NSObject <NSCopying> {
    NSDictionary *_regionInfoDictionary;
}

@property (readonly, nonatomic) NSString *displayedHostname;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
