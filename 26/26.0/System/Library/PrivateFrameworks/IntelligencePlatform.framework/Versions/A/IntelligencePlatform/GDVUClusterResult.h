@class GDEntityIdentifier;

@interface GDVUClusterResult : NSObject

@property (nonatomic, readonly) long long observationIdentifier;
@property (nonatomic, readonly) GDEntityIdentifier *entityIdentifier;
@property (nonatomic, readonly) BOOL isKeyFace;

- (id)init;
- (void).cxx_destruct;

@end
