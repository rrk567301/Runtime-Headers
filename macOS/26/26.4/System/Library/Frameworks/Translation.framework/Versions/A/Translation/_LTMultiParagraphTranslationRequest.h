@class NSObject, NSString, NSArray, NSMutableDictionary, NSAttributedString, _LTLocalePair;
@protocol OS_dispatch_queue;

@interface _LTMultiParagraphTranslationRequest : NSObject {
    _LTLocalePair *_localePair;
    NSMutableDictionary *_completedResultMap;
    id /* block */ _completionHandler;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_savedAttributes;
}

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSAttributedString *attributedText;
@property (readonly, copy, nonatomic) NSArray *paragraphRequests;

- (void).cxx_destruct;
- (void)_cleanUp;
- (void)_addAlignmentAttributesToResult:(id)a0 requestIdentifier:(id)a1;
- (id)_alignmentAttributeKeyFromRequestIdentifier:(id)a0 alignmentIdentifier:(id)a1;
- (void)_generateParagraphRequests;
- (id)_getStoredAttributesForRequestIdentifier:(id)a0 alignmentIdentifier:(id)a1;
- (id)_initWithText:(id)a0 attributedText:(id)a1 localePair:(id)a2 completionHandler:(id /* block */)a3;
- (void)_saveAttributes:(id)a0 forRequestUniqueID:(id)a1 alignmentIdentifier:(id)a2;
- (id)initWithAttributedString:(id)a0 localePair:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithText:(id)a0 localePair:(id)a1 completionHandler:(id /* block */)a2;

@end
