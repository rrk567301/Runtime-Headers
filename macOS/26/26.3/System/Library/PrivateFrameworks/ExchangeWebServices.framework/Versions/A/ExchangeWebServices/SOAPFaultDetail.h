@class NSMutableDictionary;

@interface SOAPFaultDetail : NSObject {
    NSMutableDictionary *_items;
}

- (id)init;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)valueForKey:(id)a0;

@end
