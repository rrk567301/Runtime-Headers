@interface IPAShortestEdgeImageSizePolicy : IPAImageSizePolicy {
    double _shortestEdge;
}

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })transformSize:(struct CGSize { double x0; double x1; })a0;
- (char)isBestFitPolicy;
- (id)initWithShortestEdge:(double)a0;

@end
