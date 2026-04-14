@class NSString, USOSerializedGraph, NSNumber;

@interface UPPLSpan : UPSpan

@property (retain) USOSerializedGraph *usoSerializedGraph;
@property (readonly) NSString *originalMention;
@property (readonly, copy) NSNumber *score;

+ (id)generateTypeWithPlumPrefix:(id)a0;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 originalMention:(id)a1 category:(id)a2 score:(id)a3 usoSerializedGraph:(id)a4;
- (id)getTypeWithtoutPlumPrefix;

@end
