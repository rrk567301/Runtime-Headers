@class NSString, NSMapTable;

@interface GEOCustomEnvironmentInfo : GEOEnvironmentInfo {
    NSMapTable *_overrideURLs;
    NSString *_uuid;
}

- (void).cxx_destruct;
- (BOOL)isActive;
- (id)dictionaryRepresentation;
- (void)save;
- (void)delete;
- (id)initWithName:(id)a0 displayName:(id)a1 dictionaryRepresentation:(id)a2;
- (void)makeActive;
- (void)updateWithURLs:(id)a0;
- (id)overrideURLs;

@end
