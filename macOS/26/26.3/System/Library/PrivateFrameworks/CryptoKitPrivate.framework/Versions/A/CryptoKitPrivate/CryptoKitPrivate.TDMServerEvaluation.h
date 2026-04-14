@class NSData;

@interface CryptoKitPrivate.TDMServerEvaluation : NSObject {
    void /* function */ proof;
    void /* function */ evaluatedElement;
}

@property (nonatomic, readonly) NSData *proof;
@property (nonatomic, readonly) NSData *evaluatedElement;

- (id)init;
- (void).cxx_destruct;

@end
