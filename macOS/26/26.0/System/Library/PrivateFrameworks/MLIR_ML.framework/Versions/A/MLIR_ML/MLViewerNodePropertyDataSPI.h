@class NSString, NSArray, NSData;

@interface MLViewerNodePropertyDataSPI : NSObject <NSSecureCoding, MLViewerNodePropertySPI> {
    BOOL _isSplat;
    NSData *_raw;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int dataType;
@property (readonly, nonatomic) NSArray *shape;
@property (retain, nonatomic) NSString *resourceID;

+ (id)type;

- (id)jsonDictionary;
- (void)setValue:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)dataLength;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)a0;
- (id)dataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isSplat;
- (id)initWithName:(id)a0 dataType:(unsigned int)a1 shape:(id)a2;
- (void)setSplatValue:(id)a0;

@end
