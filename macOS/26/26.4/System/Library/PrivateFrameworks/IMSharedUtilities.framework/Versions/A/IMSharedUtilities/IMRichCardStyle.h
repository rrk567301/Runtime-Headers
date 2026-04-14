@interface IMRichCardStyle : NSObject <IMAttributableContent>

@property (nonatomic, readonly) BOOL bold;
@property (nonatomic, readonly) BOOL italics;
@property (nonatomic, readonly) BOOL underline;
@property (nonatomic, readonly) long long hash;

- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)init;
- (id)initWithBold:(BOOL)a0 italics:(BOOL)a1 underline:(BOOL)a2;

@end
