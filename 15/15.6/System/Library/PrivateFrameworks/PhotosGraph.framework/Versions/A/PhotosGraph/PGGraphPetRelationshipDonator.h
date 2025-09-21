@class NSArray, NSError;

@interface PGGraphPetRelationshipDonator : NSObject {
    void /* unknown type, empty encoding */ sourceIdentifier;
}

- (id)init;
- (void).cxx_destruct;
- (void)donateWithPetNodes:(NSArray *)a0 isRebuild:(char)a1 completionHandler:(void (^)(NSError *))a2;

@end
