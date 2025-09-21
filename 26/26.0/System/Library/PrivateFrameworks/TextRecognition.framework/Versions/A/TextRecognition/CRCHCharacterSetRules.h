@class NSObject, NSCharacterSet;
@protocol OS_dispatch_queue;

@interface CRCHCharacterSetRules : NSObject

@property (retain, nonatomic) NSCharacterSet *lowercaseCharSet;
@property (retain, nonatomic) NSCharacterSet *uppercaseCharSet;
@property (retain, nonatomic) NSCharacterSet *middlePunctuationCharSet;
@property (retain, nonatomic) NSCharacterSet *endPunctuationCharSet;
@property (retain, nonatomic) NSCharacterSet *lexiconSkipCharSet;
@property (nonatomic) struct map<unsigned int, int, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, int>>> { struct __tree<std::__value_type<unsigned int, int>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, int>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, int>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } signatureUniChar;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *_charSetRulesQueue;

+ (unsigned long long)characterType:(unsigned int)a0;
+ (id)sharedCharacterSetRules;

- (void)dealloc;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)_characterType:(unsigned int)a0;

@end
