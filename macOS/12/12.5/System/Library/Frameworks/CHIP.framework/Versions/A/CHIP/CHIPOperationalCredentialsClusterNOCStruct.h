@class NSData, NSNumber;

@interface CHIPOperationalCredentialsClusterNOCStruct : NSObject

@property (retain, nonatomic) NSData *noc;
@property (retain, nonatomic) NSData *icac;
@property (retain, nonatomic) NSNumber *fabricIndex;

- (id)init;
- (void).cxx_destruct;

@end
