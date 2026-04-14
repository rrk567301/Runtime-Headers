@class NSNumber, NSData;

@interface CHIPOperationalCredentialsClusterNOCStruct : NSObject

@property (retain, nonatomic) NSNumber *fabricIndex;
@property (retain, nonatomic) NSData *noc;
@property (retain, nonatomic) NSData *icac;

- (id)init;
- (void).cxx_destruct;

@end
