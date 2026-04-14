@class NSString, NSArray, NSXPCConnection;

@interface _PSContactHandleFeatureProvider : NSObject {
    NSXPCConnection *_connection;
}

@property (class, readonly, nonatomic) NSString *numberOfOutgoingInteractions;
@property (class, readonly, nonatomic) NSString *numberOfIncomingInteractions;
@property (class, readonly, nonatomic) NSString *timeSinceLastOutgoingInteraction;
@property (class, readonly, nonatomic) NSString *timeSinceLastIncomingInteraction;
@property (class, readonly, nonatomic) NSArray *featureNames;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_interactionFeaturesForHandle:(id)a0;
- (id)interactionFeaturesForHandle:(id)a0;

@end
