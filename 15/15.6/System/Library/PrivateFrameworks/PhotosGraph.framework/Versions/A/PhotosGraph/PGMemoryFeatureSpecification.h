@class NSSet, NSObject, PGGraphFeatureNodeCollection;
@protocol OS_os_log;

@interface PGMemoryFeatureSpecification : NSObject {
    NSObject<OS_os_log> *_loggingConnection;
}

@property (readonly, nonatomic) long long featureType;
@property (readonly, nonatomic) NSSet *typeSpecificIdentifiers;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodes;
@property (readonly, nonatomic) char combineFeatureNodes;

- (void).cxx_destruct;
- (id)featureNodesInGraph:(id)a0;
- (id)initWithFeatureType:(long long)a0 typeSpecificIdentifiers:(id)a1 combineFeatureNodes:(char)a2 graph:(id)a3 loggingConnection:(id)a4;

@end
