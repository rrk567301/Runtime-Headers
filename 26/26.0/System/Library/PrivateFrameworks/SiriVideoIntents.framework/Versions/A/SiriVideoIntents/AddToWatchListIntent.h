@class Content, ContentSearch;

@interface AddToWatchListIntent : INIntent

@property (nonatomic, retain) Content *content;
@property (nonatomic, retain) ContentSearch *contentSearch;

- (id)init;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;
- (id)initWithCoder:(id)a0;

@end
