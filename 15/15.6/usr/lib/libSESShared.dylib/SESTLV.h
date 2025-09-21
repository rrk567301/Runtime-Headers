@class NSData, NSArray;

@interface SESTLV : NSObject {
    unsigned int _tag;
    NSData *_value;
    NSArray *_children;
}

@property (readonly, nonatomic) unsigned int tag;
@property (readonly, nonatomic) NSData *value;
@property (readonly, nonatomic) NSArray *children;

+ (id)TLVWithData:(id)a0;
+ (id)TLVWithTag:(unsigned int)a0 children:(id)a1;
+ (id)TLVWithTag:(unsigned int)a0 unsignedChar:(unsigned char)a1;
+ (id)TLVsWithData:(id)a0;
+ (id)TLVWithTag:(unsigned int)a0 fromData:(id)a1;
+ (id)TLVWithTag:(unsigned int)a0 unsignedLongValue:(unsigned int)a1;
+ (id)TLVWithTag:(unsigned int)a0 unsignedShort:(unsigned short)a1;
+ (id)TLVWithTag:(unsigned int)a0 value:(id)a1;
+ (id)_intToData:(unsigned int)a0;
+ (id)simpleTLVsWithData:(id)a0;
+ (id)simpleTLVsWithTag:(unsigned int)a0 fromData:(id)a1;
+ (id)_parseTLVs:(const char **)a0 end:(const char *)a1 simple:(char)a2;
+ (id)dataWithTLVs:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)asData;
- (id)valueAsString;
- (id)childWithTag:(unsigned int)a0;
- (unsigned short)valueAsUnsignedShort;
- (id)childrenWithTag:(unsigned int)a0;
- (unsigned int)valueAsUnsignedLong;
- (unsigned long long)valueAsUnsignedLongLong;
- (unsigned char)valueAsUnsignedChar;

@end
