@class NSString, NSArray;

@interface VegaSwiftElement : NSObject {
    void /* unknown type, empty encoding */ element;
}

@property (nonatomic, readonly) NSString *vr;
@property (nonatomic, readonly) BOOL isSequence;
@property (nonatomic, readonly) NSString *privateOwnerName;
@property (nonatomic, readonly) NSArray *dataSets;

- (void)appendString:(id)a0;
- (void)setData:(id)a0;
- (void)setString:(id)a0;
- (void)appendDouble:(double)a0;
- (id)tag;
- (void).cxx_destruct;
- (void)appendInteger:(long long)a0;
- (id)init;
- (id)tagName;
- (id)getSequenceItemsAndReturnError:(id *)a0;
- (id)addSequenceItemAndReturnError:(id *)a0;
- (id)doubleValueAt:(long long)a0 error:(id *)a1;
- (id)getBinaryDataAndReturnError:(id *)a0;
- (id)getIntegerDataAndReturnError:(id *)a0;
- (id)getValueArrayAndReturnError:(id *)a0;
- (id)initWithElement:(id)a0 error:(id *)a1;
- (id)integerValueAt:(long long)a0 error:(id *)a1;
- (id)stringValueAt:(long long)a0 error:(id *)a1;
- (id)valueCountAndReturnError:(id *)a0;

@end
