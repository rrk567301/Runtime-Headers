@interface GeoServices.GeoidModel : NSObject {
    void /* unknown type, empty encoding */ values;
    void /* unknown type, empty encoding */ latitudeSize;
    void /* unknown type, empty encoding */ longitudeSize;
    void /* unknown type, empty encoding */ minLatitude;
    void /* unknown type, empty encoding */ maxLatitude;
    void /* unknown type, empty encoding */ minLongitude;
    void /* unknown type, empty encoding */ maxLongitude;
    void /* unknown type, empty encoding */ latitudeStep;
    void /* unknown type, empty encoding */ longitudeStep;
    void /* unknown type, empty encoding */ minUndulation;
    void /* unknown type, empty encoding */ quantizationStep;
    void /* unknown type, empty encoding */ valid;
}

- (id)init;
- (void).cxx_destruct;
- (float)getUndulationLatitude:(double)a0 longitude:(double)a1;

@end
