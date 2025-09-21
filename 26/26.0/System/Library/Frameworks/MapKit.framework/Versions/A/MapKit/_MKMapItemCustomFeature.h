@class NSString, GEOFeatureStyleAttributes, VKCustomFeature;

@interface _MKMapItemCustomFeature : NSObject <MKCustomFeatureAnnotation, NSSecureCoding> {
    VKCustomFeature *_feature;
    GEOFeatureStyleAttributes *_styleAttributes;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL showsBalloonCallout;
@property (nonatomic) struct { double latitude; double longitude; } coordinate;
@property (nonatomic) double course;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)feature;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMapItem:(id)a0;
- (void)select;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)deselect;

@end
