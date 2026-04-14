@class NSString, HDProfile;

@interface HDSeriesQuantityEventObserver : NSObject <HDDataObserver> {
    HDProfile *_profile;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (void)samplesAdded:(id)a0 anchor:(id)a1;

@end
