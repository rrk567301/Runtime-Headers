@class NSString, USOSerializedGraph, NSNumber;

@interface UPPlumSpan : UPSpan {
    NSString *_category;
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
}

@property (retain) USOSerializedGraph *usoSerializedGraph;
@property (readonly) NSString *originalMention;
@property (readonly, copy) NSNumber *score;

+ (id)generateTypeWithPlumPrefix:(id)a0;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)category;
- (id)dictionaryRepresentation;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 originalMention:(id)a1 category:(id)a2 score:(id)a3 usoSerializedGraph:(id)a4;
- (id)getTypeWithtoutPlumPrefix;

@end
