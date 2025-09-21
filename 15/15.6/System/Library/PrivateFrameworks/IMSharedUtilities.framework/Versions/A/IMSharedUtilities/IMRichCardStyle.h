@interface IMRichCardStyle : NSObject <IMAttributableContent>

@property (nonatomic, readonly) void /* unknown type, empty encoding */ bold;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ italics;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ underline;

- (id)init;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithBold:(char)a0 italics:(char)a1 underline:(char)a2;

@end
