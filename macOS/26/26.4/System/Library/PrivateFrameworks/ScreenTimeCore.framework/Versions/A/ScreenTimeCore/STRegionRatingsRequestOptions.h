@class NSNumber, NSLocale;

@interface STRegionRatingsRequestOptions : NSObject

@property (nonatomic) BOOL unrated;
@property (retain, nonatomic) NSNumber *userDSID;
@property (retain, nonatomic) NSLocale *localDeviceLocale;

- (void).cxx_destruct;
- (id)initWithUnrated:(BOOL)a0 userDSID:(id)a1;
- (id)initWithUnrated:(BOOL)a0 userDSID:(id)a1 localDeviceLocale:(id)a2;

@end
