@class NSSet, NSArray, NSDictionary, NSMutableDictionary, _KSTextReplacementClientStore, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface CHInputContextLexiconManager : NSObject {
    NSObject<OS_dispatch_queue> *_lexiconQueue;
    id /* block */ _contactsObserverBlock;
    id /* block */ _namedEntityObserverBlock;
    long long _initialUpdateCount;
    NSObject<OS_dispatch_queue> *_recognitionProcessingQueue;
    NSMutableDictionary *_textReplacements;
    _KSTextReplacementClientStore *_textReplacementStore;
    NSMutableArray *_addressBook;
    struct _LXLexicon { } *_transientLexiconWithCustomEntries;
    NSSet *_lastCustomLexiconEntries;
}

@property (readonly, nonatomic) struct _LXLexicon { } *transientLexicon;
@property (readonly, nonatomic) struct _LXLexicon { } *transientPhraseLexicon;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *lexiconQueue;
@property (readonly, nonatomic) void *vocabulary;
@property (readonly, copy, nonatomic) NSDictionary *textReplacements;
@property (readonly, copy, nonatomic) NSArray *addressBookLexicon;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (struct _LXLexicon { } *)transientLexiconWithCustomEntries:(id)a0;

@end
