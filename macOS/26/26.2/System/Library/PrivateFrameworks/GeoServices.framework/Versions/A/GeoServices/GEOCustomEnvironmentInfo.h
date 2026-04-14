@class NSString, NSMapTable;

@interface GEOCustomEnvironmentInfo : GEOEnvironmentInfo {
    NSMapTable *_overrideURLs;
    NSString *_uuid;
}

@property (retain, nonatomic) NSString *displayName;

- (void)save;
- (BOOL)isActive;
- (void)delete;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)updateWithURLs:(id)a0;
- (id)initWithName:(id)a0 displayName:(id)a1 dictionaryRepresentation:(id)a2;
- (void)makeActive;
- (id)overrideURLs;

@end
