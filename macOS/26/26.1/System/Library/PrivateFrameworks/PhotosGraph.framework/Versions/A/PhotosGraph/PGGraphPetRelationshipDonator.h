@class NSArray, NSError;

@interface PGGraphPetRelationshipDonator : NSObject {
    void /* unknown type, empty encoding */ sourceIdentifier;
}

- (void).cxx_destruct;
- (id)init;
- (void)donateWithPetNodes:(NSArray *)a0 isRebuild:(BOOL)a1 completionHandler:(void (^)(NSError *))a2;

@end
