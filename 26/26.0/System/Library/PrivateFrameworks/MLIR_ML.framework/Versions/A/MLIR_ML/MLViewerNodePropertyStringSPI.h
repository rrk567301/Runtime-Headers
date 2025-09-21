@class NSString, NSData;

@interface MLViewerNodePropertyStringSPI : NSObject <NSSecureCoding, MLViewerNodePropertySPI> {
    NSData *_stringUTF8Data;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *stringValue;

+ (id)type;

- (id)jsonDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 value:(id)a1;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)a0;

@end
