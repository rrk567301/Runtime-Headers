@class NSArray, NSString;

@interface _MPCPlayerShuffleCommand : _MPCPlayerCommand <MPCPlayerShuffleCommand>

@property (nonatomic) long long currentShuffleType;
@property (retain, nonatomic) NSArray *supportedShuffleTypes;
@property (nonatomic) char supportsChangeShuffle;
@property (nonatomic) char supportsAdvanceShuffle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)advance;
- (id)setShuffleType:(long long)a0;

@end
