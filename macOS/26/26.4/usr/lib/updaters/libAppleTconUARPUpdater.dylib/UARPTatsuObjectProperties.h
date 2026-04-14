@class NSString, NSNumber, UARPComponentTag;

@interface UARPTatsuObjectProperties : NSObject

@property (readonly) NSString *ftabSubfile;
@property (readonly) NSString *keyName;
@property (readonly) BOOL needsEPRO;
@property (readonly) BOOL needsESEC;
@property (readonly) BOOL needsSHA256;
@property (readonly) BOOL needsSHA384;
@property (readonly) BOOL needsSHA512;
@property (readonly) BOOL needsTrusted;
@property (readonly) UARPComponentTag *componentTag;
@property (readonly) NSString *digestKeyName;
@property (readonly) NSNumber *measureLength;
@property (readonly) NSNumber *measureOffset;

- (void).cxx_destruct;
- (id)description;
- (id)initWithObjectPropertyDictionary:(id)a0;

@end
