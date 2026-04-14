@class NSString, MKLocalSearchCompletion, MKMapItem;

@interface EKMapSearchCompletion : NSObject

@property (retain, nonatomic) MKLocalSearchCompletion *mapSearchCompletion;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) MKMapItem *mapItem;

- (void).cxx_destruct;
- (id)description;
- (id)initWithMapSearchCompletion:(id)a0;

@end
