@class NSString, NSArray, NSXPCConnection;

@interface _PSContactHandleFeatureProvider : NSObject {
    NSXPCConnection *_connection;
}

@property (class, readonly, nonatomic) NSString *numberOfOutgoingInteractions;
@property (class, readonly, nonatomic) NSString *numberOfIncomingInteractions;
@property (class, readonly, nonatomic) NSString *timeSinceLastOutgoingInteraction;
@property (class, readonly, nonatomic) NSString *timeSinceLastIncomingInteraction;
@property (class, readonly, nonatomic) NSArray *featureNames;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_interactionFeaturesForHandle:(id)a0 store:(id)a1;
- (id)interactionFeaturesForHandle:(id)a0;

@end
