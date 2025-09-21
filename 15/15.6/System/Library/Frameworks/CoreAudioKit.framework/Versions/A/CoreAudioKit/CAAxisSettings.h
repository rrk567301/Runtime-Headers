@class NSColor, NSDictionary, NSString;

@interface CAAxisSettings : NSObject

@property (retain) NSColor *axisColor;
@property (retain) NSColor *majorLineColor;
@property (retain) NSColor *minorLineColor;
@property (retain) NSColor *centerLineColor;
@property (retain) NSColor *pointReferenceLineColor;
@property int gridLineCount;
@property float minValue;
@property float maxValue;
@property float minAllowedValue;
@property float maxAllowedValue;
@property float centerValue;
@property float logBase;
@property char clipDisplayToMaxAllowed;
@property (retain) NSDictionary *valueLabelStringAttributes;
@property (retain) NSDictionary *unitsLabelStringAttributes;
@property (retain) NSString *unitsLabelString;
@property char abbreviateValues;
@property char drawFirstAndLastKOnly;
@property char suppressInitialUnit;
@property char showActiveArea;
@property char suppressLabels;
@property int labelPosition;

- (void)dealloc;

@end
