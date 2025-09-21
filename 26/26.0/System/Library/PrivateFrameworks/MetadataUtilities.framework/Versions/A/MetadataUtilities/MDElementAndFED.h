@class NSString, FilterElementDefinition;

@interface MDElementAndFED : NSObject {
    NSString *_element;
    FilterElementDefinition *_fed;
}

- (void)dealloc;
- (id)initWithElement:(id)a0 fed:(id)a1;

@end
