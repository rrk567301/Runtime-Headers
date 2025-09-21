@class NSSet, NSIndexSet;

@interface TSKStructuredTextImportSettings : NSObject <NSCopying>

@property (nonatomic) long long type;
@property (nonatomic) unsigned long long startingRow;
@property (copy, nonatomic) NSSet *decimalSeparators;
@property (copy, nonatomic) NSSet *thousandsSeparators;
@property (nonatomic) char transposeRowsAndColumns;
@property (copy, nonatomic) NSSet *delimiters;
@property (nonatomic) char automaticDelimiters;
@property (copy, nonatomic) NSSet *textQualifiers;
@property (nonatomic) char collapseConsecutiveDelimiters;
@property (copy, nonatomic) NSIndexSet *columnOffsets;
@property (nonatomic) char automaticOffsets;
@property (nonatomic) unsigned long long sourceEncoding;
@property (readonly, nonatomic) char hasAnyAutomaticSettings;

+ (id)settings;
+ (id)keyPathsForValuesAffectingIsValid;
+ (id)settingsFromArchive:(const void *)a0;
+ (id)settingsWithType:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (char)isValid;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (id)errorString;
- (id)initFromArchive:(const void *)a0;
- (void)encodeToArchive:(void *)a0;

@end
