@class NSString, GEOFeatureStyleAttributes, VKCustomFeature;

@interface _MKMapItemCustomFeature : NSObject <MKCustomFeatureAnnotation, NSSecureCoding> {
    VKCustomFeature *_feature;
    GEOFeatureStyleAttributes *_styleAttributes;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char showsBalloonCallout;
@property (nonatomic) struct { double latitude; double longitude; } coordinate;
@property (nonatomic) double course;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)select;
- (id)feature;
- (id)initWithMapItem:(id)a0;
- (void)deselect;

@end
