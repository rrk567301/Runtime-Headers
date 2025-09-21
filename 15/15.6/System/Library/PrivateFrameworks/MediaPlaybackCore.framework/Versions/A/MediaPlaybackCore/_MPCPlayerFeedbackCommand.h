@class NSString, MPModelObject;

@interface _MPCPlayerFeedbackCommand : _MPCPlayerItemCommand <MPCPlayerFeedbackCommand>

@property (readonly, nonatomic) unsigned int command;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *localizedShortTitle;
@property (nonatomic) long long presentationStyle;
@property (nonatomic) char value;
@property (nonatomic) char isDislikingFavoritableModelObject;
@property (copy, nonatomic) MPModelObject *favoritableModelObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)changeValue:(char)a0;
- (id)initWithResponse:(id)a0 mediaRemoteCommand:(unsigned int)a1;

@end
