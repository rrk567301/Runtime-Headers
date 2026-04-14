@interface OADPointTextSpacing : OADTextSpacing {
    int mPoints;
}

- (int)points;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithPoints:(int)a0;

@end
