@class NSString, NSArray, NSMutableDictionary;

@interface PSIObject : NSObject <NSCopying> {
    NSMutableDictionary *_synonymsByOriginalWord;
}

@property (copy, nonatomic, setter=setUUID:) NSString *uuid;
@property (readonly, nonatomic) NSArray *tokens;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0;
- (void)clear;
- (void)reverse;
- (id)_initForCopy:(BOOL)a0;
- (id)initForReverse;
- (void)addContentString:(id)a0 category:(short)a1 owningCategory:(short)a2;
- (void)addIdentifier:(id)a0 category:(short)a1 owningCategory:(short)a2;
- (void)addContentString:(id)a0 identifier:(id)a1 category:(short)a2 owningCategory:(short)a3;
- (void)addSynonym:(id)a0 category:(short)a1 originalContentString:(id)a2;
- (void)addSynonym:(id)a0 identifier:(id)a1 category:(short)a2 originalContentString:(id)a3;
- (void)enumerateSynonymsForOriginalContentString:(id)a0 handler:(id /* block */)a1;

@end
