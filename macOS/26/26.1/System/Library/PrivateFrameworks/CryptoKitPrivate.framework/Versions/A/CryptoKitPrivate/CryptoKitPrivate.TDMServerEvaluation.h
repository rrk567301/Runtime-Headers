@class NSData;

@interface CryptoKitPrivate.TDMServerEvaluation : NSObject {
    void /* function */ proof;
    void /* function */ evaluatedElement;
}

@property (nonatomic, readonly) NSData *proof;
@property (nonatomic, readonly) NSData *evaluatedElement;

- (void).cxx_destruct;
- (id)init;

@end
