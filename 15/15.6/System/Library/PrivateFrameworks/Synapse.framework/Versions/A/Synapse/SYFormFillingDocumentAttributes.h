@interface SYFormFillingDocumentAttributes : NSObject <NSCopying>

@property (readonly, nonatomic) char formFillingCoachingDisabled;

+ (void)_formFillingDocumentAttributesForFileAtURL:(id)a0 completion:(id /* block */)a1;
+ (void)_removeFormFillingDocumentAttributesForFileAtURL:(id)a0 completion:(id /* block */)a1;
+ (id)dictionaryRepresentationWithNullValues;
+ (id)formFillingDocumentAttributesForFileAtURL:(id)a0 error:(id *)a1;
+ (char)removeFormFillingDocumentAttributesForFileAtURL:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)saveToFileURL:(id)a0 error:(id *)a1;
- (char)_formFillingCoachingDisabledValueFromDictionary:(id)a0;
- (void)_saveToFileURL:(id)a0 completion:(id /* block */)a1;
- (id)initWithFormFillingCoachingDisabled:(char)a0;

@end
