@class NSString, NSArray;

@interface VegaSwiftElement : NSObject {
    void /* unknown type, empty encoding */ element;
}

@property (nonatomic, readonly) NSString *vr;
@property (nonatomic, readonly) BOOL isSequence;
@property (nonatomic, readonly) NSString *privateOwnerName;
@property (nonatomic, readonly) NSArray *dataSets;

- (id)tag;
- (void)appendInteger:(long long)a0;
- (id)init;
- (void)setData:(id)a0;
- (void)appendString:(id)a0;
- (void).cxx_destruct;
- (id)getData;
- (void)appendDouble:(double)a0;
- (void)setString:(id)a0;
- (id)binaryData;
- (id)tagName;
- (id)getString;
- (id)valueCount;
- (id)getInt64;
- (id)getUInt64;
- (id)getValueAsArray;
- (id)addSequenceItemAndReturnError:(id *)a0;
- (id)integerValueAt:(long long)a0;
- (id)getSequenceItemsAndReturnError:(id *)a0;
- (id)doubleValueAt:(long long)a0;
- (id)getUInt16;
- (id)initWithElement:(id)a0 error:(id *)a1;

@end
