@class NSArray;
@protocol GEOTransitLine;

@interface MKTransitInactiveLinesSectionController : MKTransitSectionController {
    id<GEOTransitLine> _line;
}

@property (readonly, nonatomic) NSArray *inactiveLines;

- (void).cxx_destruct;
- (id)init;
- (void)_buildRows;
- (id)_pagingFilter;
- (void)_setNeedsBuildRows;
- (id)initWithMapItem:(id)a0 system:(id)a1 line:(id)a2;

@end
