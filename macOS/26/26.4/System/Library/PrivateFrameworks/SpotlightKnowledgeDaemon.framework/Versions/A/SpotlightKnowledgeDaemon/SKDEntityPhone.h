@class NSString, NSArray, NSMutableArray;

@interface SKDEntityPhone : SKDEntity {
    NSMutableArray *_synonyms;
}

@property (readonly, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) NSArray *synonyms;

- (void).cxx_destruct;
- (void)addSynonym:(id)a0;

@end
