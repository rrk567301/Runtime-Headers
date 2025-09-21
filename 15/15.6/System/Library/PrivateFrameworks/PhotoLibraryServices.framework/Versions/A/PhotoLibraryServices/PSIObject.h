@class NSString, NSArray, NSMutableDictionary;

@interface PSIObject : NSObject <NSCopying, PSITypedObject> {
    NSMutableDictionary *_synonymsByOriginalWord;
    NSMutableDictionary *_synonymsByOriginalLookupIdentifier;
}

@property (copy, nonatomic, setter=setUUID:) NSString *uuid;
@property (readonly, nonatomic) NSArray *tokens;
@property (readonly, nonatomic) char isUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0;
- (void)clear;
- (unsigned long long)objectType;
- (void)reverse;
- (id)_initForCopy:(char)a0;
- (void)addContentString:(id)a0 category:(short)a1 owningCategory:(short)a2;
- (void)addContentString:(id)a0 identifier:(id)a1 category:(short)a2 owningCategory:(short)a3;
- (void)addIdentifier:(id)a0 category:(short)a1 owningCategory:(short)a2;
- (void)addSynonym:(id)a0 category:(short)a1 originalContentString:(id)a2;
- (void)addSynonym:(id)a0 lookupIdentifier:(id)a1 category:(short)a2 originalContentString:(id)a3;
- (void)enumerateSynonymsForOriginalContentString:(id)a0 orOriginalLookupIdentifier:(id)a1 handler:(id /* block */)a2;
- (id)initForReverse;

@end
