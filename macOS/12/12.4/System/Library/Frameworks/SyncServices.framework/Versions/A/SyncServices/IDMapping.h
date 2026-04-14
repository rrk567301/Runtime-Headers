@class NSString;

@interface IDMapping : NSObject {
    NSString *_localId;
    NSString *_globalId;
}

+ (id)mappingFromGlobalId:(id)a0 toLocalId:(id)a1;

- (void)dealloc;
- (id)description;
- (id)globalId;
- (id)localId;
- (void)setLocalId:(id)a0;
- (id)initMappingFromGlobalId:(id)a0 toLocalId:(id)a1;

@end
