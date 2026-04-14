@class CCDataResourceWriteAccess;

@interface CCDifferentialSetUpdaterFactory : NSObject {
    CCDataResourceWriteAccess *_writeAccess;
}

- (void).cxx_destruct;
- (id)beginUpdateForDonationRequest:(id)a0 error:(id *)a1;
- (id)initWithWriteAccess:(id)a0;

@end
