@interface IMRichCardStyle : NSObject <IMAttributableContent>

@property (nonatomic, readonly) BOOL bold;
@property (nonatomic, readonly) BOOL italics;
@property (nonatomic, readonly) BOOL underline;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)initWithBold:(BOOL)a0 italics:(BOOL)a1 underline:(BOOL)a2;

@end
