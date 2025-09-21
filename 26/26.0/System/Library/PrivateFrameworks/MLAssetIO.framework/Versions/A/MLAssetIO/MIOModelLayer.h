@class NSString, NSDictionary, NSArray;

@interface MIOModelLayer : NSObject {
    NSDictionary *_layerHistogram;
    NSArray *_computePrecision;
    NSArray *_storagePrecision;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *type;

- (id)description;
- (id)initWithName:(id)a0 type:(id)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)computePrecision;
- (id)initWithMessageStream:(struct CodedInputStream { char *x0; char *x1; struct ZeroCopyInputStream *x2; int x3; int x4; unsigned int x5; BOOL x6; BOOL x7; int x8; int x9; int x10; int x11; int x12; struct DescriptorPool *x13; struct MessageFactory *x14; } *)a0 error:(id *)a1;
- (id)initWithName:(id)a0 type:(id)a1 histogram:(id)a2 computePrecision:(id)a3 storagePrecision:(id)a4;
- (id)layerHistogram;
- (id)storagePrecision;

@end
